/* Ghidra address: 019a39e0 */
/* Ghidra symbol: FUN_019a39e0 */


void FUN_019a39e0(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6)

{
  longlong lVar1;
  
  if (param_6 == '\0') {
    lVar1 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x3a);
  }
  else {
    lVar1 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x96);
  }
  *(undefined1 *)(lVar1 + 0xd1) = param_3;
  *(undefined1 *)(lVar1 + 0xd3) = 0;
  FUN_00414ad0(lVar1 + 0x98,param_2);
  FUN_01d38290(lVar1,1);
  *(undefined4 *)(lVar1 + 0xc) = param_4;
  *(undefined4 *)(lVar1 + 0x10) = param_5;
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x20))(*(longlong **)(param_1 + 0xe0),lVar1);
  return;
}

