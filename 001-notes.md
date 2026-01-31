# sample proj for containerizing C++
https://docs.docker.com/guides/cpp/containerize/

git clone https://github.com/dockersamples/c-plus-plus-docker.git

Run the app:  
 docker compose up --build

Run it in detached mode:  
 docker compose up --build -d

docker compose down (to stop after it's in detached mode)

# more sample projects for c++

https://docs.docker.com/guides/cpp/develop/

```yaml
   develop:
      watch:
        - action: rebuild
          path: .
```
- this allows you to keep the container running and to have it rebuild when you make modifications (I think) 

` docker compose watch` 

- Now, if you modify your ok_api.cpp you will see the changes in real time without re-building the image.

I got: `unknown docker command: "compose watch"` ... probably due to my docker version or something.
