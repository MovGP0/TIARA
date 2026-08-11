/* Ghidra address: 01628c50 */
/* Ghidra symbol: FUN_01628c50 */


longlong FUN_01628c50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  lVar1 = FUN_0161bc10(*(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x5bc),
                       *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x48));
  uVar2 = FUN_0161bcd0(uVar2,lVar1,0,1);
  uVar2 = FUN_01614c70(uVar2);
  *(undefined8 *)(lVar1 + 0x680) = uVar2;
  return lVar1 + 0x680;
}

