/* Ghidra address: 01138e40 */
/* Ghidra symbol: FUN_01138e40 */


void FUN_01138e40(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined4 *param_5,char param_6,char param_7,undefined1 param_8)

{
  if (*(char *)(*(longlong *)(param_1 + 0xa10) + 0x110) == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))(*(longlong **)(param_1 + 0xa18),param_2);
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0xf0))(*(longlong **)(param_1 + 0xa18),param_3);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))(*(longlong **)(param_1 + 0xa18),param_2)
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x100))(*(longlong **)(param_1 + 0xa18),param_3)
    ;
  }
  *(undefined8 *)(param_1 + 0xa28) = *param_2;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x168) = *param_2;
  *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xa28);
  *(undefined8 *)(param_1 + 0xa48) = *param_3;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa10) + 0x170) = *param_3;
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x108))(*(longlong **)(param_1 + 0xa18),param_4);
  *(undefined8 *)(param_1 + 0xa50) = *param_4;
  (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x110))(*(longlong **)(param_1 + 0xa18),param_5);
  *(undefined4 *)(param_1 + 0xa58) = *param_5;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa10) + 0x178) = *param_5;
  FUN_0113a9b0(param_1);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0xa00),param_6 == '\0');
  FUN_0113c4e0(param_1,param_1);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x998),param_7 == '\0');
  FUN_0113c550(param_1,param_1);
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x990),param_8);
  FUN_0113c5c0(param_1,param_1);
  return;
}

