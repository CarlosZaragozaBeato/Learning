package es.carlos.proyecto1.Proyecto1.rest;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@Controller
public class MiRestController {
    @GetMapping("/")
    public String saludo(){
        return "index";
    }
}
