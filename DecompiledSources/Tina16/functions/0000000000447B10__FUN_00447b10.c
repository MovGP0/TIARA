/* Ghidra address: 00447b10 */
/* Ghidra symbol: FUN_00447b10 */


undefined1 FUN_00447b10(undefined8 param_1,double *param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  double *local_48;
  undefined1 local_3d;
  undefined4 local_3c;
  double local_38;
  ushort local_2a;
  
  local_3d = 0;
  local_48 = param_2;
  FUN_004479a0(auStack_68);
  local_3c = FUN_0040a140();
  FUN_00447970(0);
  FUN_0040a0f0(DAT_01dc0590);
  FUN_004479c0(auStack_68);
  if ((local_2a != 0) && (sVar1 = FUN_004479f0(auStack_68), local_2a != 0)) {
    local_38 = 0.0;
    iVar3 = FUN_00447a30(auStack_68,&local_38);
    iVar4 = 0;
    if (local_2a == *(ushort *)(param_3 + 0x17a)) {
      FUN_004479a0(auStack_68);
      iVar4 = FUN_00447a30(auStack_68,&local_38);
      iVar5 = -iVar4;
    }
    else {
      iVar5 = 0;
    }
    if ((local_2a & 0xffdf) == 0x45) {
      FUN_004479a0(auStack_68);
      sVar2 = FUN_00447ab0(auStack_68);
      iVar5 = iVar5 + sVar2;
    }
    if ((iVar3 == 0) && (iVar4 == 0)) {
      return local_3d;
    }
    FUN_004479c0(auStack_68);
    if (local_2a == 0) {
      local_38 = (double)FUN_00410440(local_38,iVar5);
      local_38 = local_38 * (double)(int)sVar1;
      *local_48 = local_38;
      local_3d = FUN_00447970(9);
    }
  }
  FUN_0040a0f0(local_3c);
  return local_3d;
}

