# ft_printf

## Descripción
`ft_printf` es una implementación personalizada de la función `printf` en el lenguaje de programación C. Esta función permite formatear y enviar texto a la salida estándar de una manera similar a la función original `printf` de la biblioteca estándar de C.

## Características principales
- **Formateo de cadena**: `ft_printf` admite especificadores de formato, como `%s` para cadenas, `%d` para enteros, `%f` para números de punto flotante, entre otros.
- **Ancho de campo y precisión**: Se puede especificar el ancho de campo y la precisión para controlar la longitud de los campos impresos.
- **Modificadores de longitud**: Admite modificadores de longitud como `h`, `l`, `ll`, entre otros, para manejar diferentes tamaños de datos.

## Uso básico
```c
#include "ft_printf.h"

int main() {
    ft_printf("Hola, %s! El número es %d\n", "mundo", 42);
    return 0;
}
```

## Compilación
Para compilar el proyecto, se proporciona un Makefile. Ejecute el siguiente comando en la terminal:

```bash
make
```

Esto generará la biblioteca estática `libftprintf.a`, que puede vincularse con sus programas.

## Contribuciones
Las contribuciones son bienvenidas. Si encuentra errores o desea mejorar la implementación, no dude en enviar un pull request.

## Autor
@febasma
