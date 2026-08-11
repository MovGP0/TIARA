/* Ghidra address: 00664b70 */
/* Ghidra symbol: FUN_00664b70 */


longlong FUN_00664b70(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 8) = 1;
  *(undefined4 *)(local_res8 + 0xc) = 5;
  iVar3 = FUN_0044f060();
  if (iVar3 == 2) {
    iVar3 = FUN_0044f080();
    if (iVar3 < 4) goto LAB_00664bcf;
LAB_00664bfb:
    uVar2 = 1;
  }
  else {
LAB_00664bcf:
    iVar3 = FUN_0044f060();
    if (iVar3 == 1) {
      iVar3 = FUN_0044f080();
      if (4 < iVar3) goto LAB_00664bfb;
      iVar3 = FUN_0044f080();
      if (iVar3 == 4) {
        iVar3 = FUN_0044f0a0();
        if (9 < iVar3) goto LAB_00664bfb;
      }
    }
    uVar2 = 0;
  }
  *(undefined1 *)(local_res8 + 0x11) = uVar2;
  FUN_00664ed0(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

