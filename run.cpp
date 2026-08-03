#include <iostream>

using namespace std;

// ___________________________________________________________
// CONFIGURATIONS
// ___________________________________________________________

typedef struct {

} Config;

typedef struct {

} Weights;

typedef struct {

} RuntimeState;

typedef struct {

} Transformer;

// ___________________________________________________________

void malloc_runtime_state();
void free_runtime_state();
void load_checkpoint();
void map_weights();

// ___________________________________________________________
// TRANSFORMER OPS & TOOLING
// ___________________________________________________________

void RMSNorm();



// ___________________________________________________________
void forward();

// ___________________________________________________________
void generate();

int main() {
    cout << "Gemma runtime" << endl;
}