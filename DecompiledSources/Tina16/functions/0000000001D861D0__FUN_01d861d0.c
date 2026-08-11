/* Ghidra address: 01d861d0 */
/* Ghidra symbol: FUN_01d861d0 */


undefined8
FUN_01d861d0(longlong param_1,undefined1 param_2,undefined1 param_3,char param_4,undefined8 param_5)

{
  longlong lVar1;
  undefined2 local_3a [5];
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    local_3a[0] = 0xd;
    (**(code **)(**(longlong **)(lVar1 + 0x920) + 0x268))(*(longlong **)(lVar1 + 0x920),param_2);
    FUN_01d83c70(lVar1,param_1);
    (**(code **)(**(longlong **)(lVar1 + 0x908) + 0x268))(*(longlong **)(lVar1 + 0x908),param_3);
    FUN_01d82bd0(lVar1,param_1);
    if (param_4 == '\0') {
      FUN_0082a6c0(*(undefined8 *)(lVar1 + 0x9e8),1);
      FUN_01d82980(lVar1,param_1);
    }
    else {
      FUN_0082a6c0(*(undefined8 *)(lVar1 + 0x9f0),1);
      FUN_01d829c0(lVar1,param_1);
    }
    FUN_00b90440(*(undefined8 *)(lVar1 + 0xa30),param_5);
    FUN_01d83d20(lVar1,param_1,local_3a);
  }
  return 0;
}

