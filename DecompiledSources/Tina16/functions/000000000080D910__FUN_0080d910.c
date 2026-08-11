/* Ghidra address: 0080d910 */
/* Ghidra symbol: FUN_0080d910 */


undefined4 FUN_0080d910(longlong param_1,undefined4 param_2,undefined8 param_3,undefined1 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  *param_4 = 1;
  lVar3 = 0;
  if (*(longlong *)(DAT_02012670 + 200) != 0) {
    lVar3 = FUN_007f9b70(*(longlong *)(DAT_02012670 + 200),0);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x5c0) != 0)) {
      uVar2 = (**(code **)(lVar3 + 0x5c0))(*(undefined8 *)(lVar3 + 0x5c8),param_2,param_3,param_4);
    }
  }
  if ((char)uVar2 == '\0') {
    lVar1 = *(longlong *)(DAT_02012670 + 0xd0);
    if ((((lVar1 != 0) && (lVar1 != lVar3)) && (lVar1 != 0)) && (*(longlong *)(lVar1 + 0x5c0) != 0))
    {
      uVar2 = (**(code **)(lVar1 + 0x5c0))(*(undefined8 *)(lVar1 + 0x5c8),param_2,param_3,param_4);
    }
    if (((char)uVar2 == '\0') && (*(longlong *)(param_1 + 0x230) != 0)) {
      uVar2 = (**(code **)(param_1 + 0x230))
                        (*(undefined8 *)(param_1 + 0x238),param_2,param_3,param_4);
    }
  }
  return uVar2;
}

