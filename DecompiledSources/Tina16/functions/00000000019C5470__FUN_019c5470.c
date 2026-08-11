/* Ghidra address: 019c5470 */
/* Ghidra symbol: FUN_019c5470 */


longlong FUN_019c5470(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  uVar1 = *param_4;
  lVar2 = FUN_01cf1750(0,&PTR_FUN_01cf10a8);
  FUN_01d38290(lVar2,1);
  local_30 = (undefined4)uVar1;
  *(undefined4 *)(lVar2 + 0xc) = local_30;
  uStack_2c = (undefined4)((ulonglong)uVar1 >> 0x20);
  *(undefined4 *)(lVar2 + 0x10) = uStack_2c;
  *(undefined1 *)(lVar2 + 0xd1) = 0;
  (**(code **)(*param_2 + 0x20))(param_2,lVar2);
  return lVar2;
}

