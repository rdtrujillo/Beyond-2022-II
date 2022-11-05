Mesh mesh(mesh_file, 1, 1);
int dim = mesh.Dimension();

int ref_levels = (int)floor(log(50000./mesh.GetNE())/log(2.)/dim);
for (int l = 0; l < ref_levels; l++)
{
   mesh.UniformRefinement();
}