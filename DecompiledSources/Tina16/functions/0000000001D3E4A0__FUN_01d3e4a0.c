/* Ghidra address: 01d3e4a0 */
/* Ghidra symbol: FUN_01d3e4a0 */


undefined4 FUN_01d3e4a0(longlong *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  longlong unaff_RDI;
  int unaff_R13D;
  longlong local_38;
  undefined2 local_2a;
  
  FUN_01d3d920(param_1,0xe,0,&local_2a);
  cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,local_2a,&local_38);
  if (cVar1 == '\x0e') {
    unaff_RDI = *(longlong *)(local_38 + 8);
    if (*(int *)(unaff_RDI + 0x10) < param_2) {
      unaff_R13D = (param_2 - *(int *)(unaff_RDI + 0x10)) + -1;
      unaff_RDI = *(longlong *)(local_38 + 0x10);
    }
    else {
      unaff_R13D = param_2 + -1;
    }
  }
  if (unaff_R13D < *(int *)(unaff_RDI + 0x10)) {
    puVar3 = (undefined4 *)FUN_01d3c000(unaff_RDI,unaff_R13D);
    uVar2 = *puVar3;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

