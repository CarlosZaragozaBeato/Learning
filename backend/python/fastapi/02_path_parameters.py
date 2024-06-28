from fastapi import FastAPI


# # PATH PARAMETERS
# app = FastAPI()
# @app.get("/item/{item_id}")

# async def read_item(item_id:int):
#     return {"item_id": str(type(item_id))}

# @app.get("/users/me")
# async def read_user_me():
#     return {"user_id":"the current user"}

# @app.get("/users/{user_id}")
# async def read_user(user_id:int):
#     return {"user_id":user_id}


# PREDEFINED VALUES
from enum import Enum 


class ModelName(str, Enum):
    alexnet = "alexnet"
    resnet = "resnet"
    lenet = "lenet"

app = FastAPI()

@app.get("/models/{model_name}")
async def get_model(model_name:ModelName):
    if model_name is ModelName.alexnet:
        return {"model_name":model_name, "message": "Deep Learning FTW!"}

    if model_name.value is "lenet":
        return {"model_name":model_name, "message": "LeCNN all the images"}
    
    return {"model_name": model_name, "message": "Have some residuals"}


@app.get("/files/{file_path:path}")
async def read_file(file_path: str):
    return {"file_path": file_path}