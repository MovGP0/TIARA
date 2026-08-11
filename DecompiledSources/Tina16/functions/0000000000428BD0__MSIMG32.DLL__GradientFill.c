/* Ghidra address: 00428bd0 */
/* Ghidra symbol: MSIMG32.DLL::GradientFill */


BOOL __stdcall
GradientFill(HDC hdc,PTRIVERTEX pVertex,ULONG nVertex,PVOID pMesh,ULONG nMesh,ULONG ulMode)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00428bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = GradientFill(hdc,pVertex,nVertex,pMesh,nMesh,ulMode);
  return BVar1;
}

