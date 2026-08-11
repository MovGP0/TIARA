/* Ghidra address: 00af5340 */
/* Ghidra symbol: FUN_00af5340 */


void FUN_00af5340(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_20;
  undefined2 local_1a;
  
  local_30 = auStack_58;
  cVar2 = FUN_00af2f30(param_1);
  if ((cVar2 == '\0') && (param_2 != *(char *)(param_1[0x116] + 0x91))) {
    local_1a = *(undefined2 *)(*(longlong *)PTR_DAT_02005950 + 0x9c);
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,0xfff5);
    FUN_00afe640(param_1,1);
    lVar1 = param_1[0x116];
    *(char *)(lVar1 + 0x91) = param_2;
    if (0 < *(int *)(lVar1 + 0x10)) {
      FUN_00aa84c0(lVar1);
      local_20 = FUN_00af5fb0(param_1);
      FUN_00af2250(param_1);
      FUN_00af6000(param_1,local_20);
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,local_1a);
    FUN_00afe640(param_1,0);
  }
  return;
}

