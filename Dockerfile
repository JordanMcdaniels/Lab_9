# Set the base image to use
FROM gcc:latest
# Copy the C program into the container
COPY Cprogram.c .
# Compile the C program
RUN gcc -o Cprogram Cprogram.c
# Set the command to run when the container starts
CMD ["./Cprogram"]