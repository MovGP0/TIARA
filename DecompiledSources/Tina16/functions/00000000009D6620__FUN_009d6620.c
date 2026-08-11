/* Ghidra address: 009d6620 */
/* Ghidra symbol: FUN_009d6620 */


undefined4 FUN_009d6620(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  longlong *local_20;
  
  local_38 = auStack_58;
  *param_3 = 0;
  FUN_0041b800(param_3);
  lVar1 = *(longlong *)(param_1 + 0x20);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
    local_20 = *(longlong **)(*(longlong *)(lVar1 + 0x68) + 0x40);
    (**(code **)(*local_20 + 0x88))(local_20,*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*local_20 + 0x90))(local_20,param_2);
    FUN_009d2fd0(param_1);
    cVar2 = (**(code **)(*local_20 + 0x98))(local_20);
    if (cVar2 != '\0') {
      FUN_009d3640(param_3,local_20,*(undefined8 *)(param_1 + 0x20));
    }
    FUN_009d31d0(param_1);
  }
  return 0;
}

