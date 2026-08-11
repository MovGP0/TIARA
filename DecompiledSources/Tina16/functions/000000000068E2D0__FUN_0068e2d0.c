/* Ghidra address: 0068e2d0 */
/* Ghidra symbol: FUN_0068e2d0 */


longlong * FUN_0068e2d0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00652880(local_res8,0,param_3);
  FUN_0064cbf0(local_res8,0x79);
  uVar2 = (**(code **)(*local_res8 + 0x1a0))(local_res8,3);
  FUN_0064cc50(local_res8,uVar2);
  FUN_0065bce0(local_res8,1);
  *(undefined4 *)(local_res8 + 0x14) = 0xd0;
  *(undefined1 *)(local_res8 + 0x92) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x494) = 0;
  *(undefined4 *)(local_res8 + 0x93) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x49c) = 100;
  *(undefined2 *)(local_res8 + 0x95) = 1;
  *(undefined2 *)((longlong)local_res8 + 0x4aa) = 1;
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    iVar3 = FUN_0044f060();
    if (iVar3 == 2) {
      *(undefined1 *)(local_res8 + 0x69) = 0;
    }
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

