/* Ghidra address: 015638e0 */
/* Ghidra symbol: FUN_015638e0 */


undefined8 FUN_015638e0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 local_39;
  short *local_38;
  undefined1 local_2a;
  undefined1 local_29 [9];
  
  uVar2 = FUN_01d03160(param_2);
  if (param_2[0xa5] == 0) {
    cVar1 = FUN_01d40050(uVar2);
    if ((cVar1 == '\0') && (cVar1 = FUN_01d400c0(uVar2), cVar1 == '\0')) {
      local_29[0] = (**(code **)(*param_2 + 0x2d0))(param_2,0,&local_38);
      FUN_01d3d880(param_1,local_38);
      return param_1;
    }
    local_38 = (short *)FUN_01cfde70(param_2,1,1,local_29,&local_2a,&local_39);
    FUN_01d3d7f0(param_1,*local_38 + -1);
  }
  else {
    iVar3 = FUN_01d03580(param_2);
    FUN_01d3d7f0(param_1,iVar3 + -1);
  }
  return param_1;
}

