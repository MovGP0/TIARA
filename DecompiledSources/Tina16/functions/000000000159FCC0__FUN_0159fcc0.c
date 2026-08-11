/* Ghidra address: 0159fcc0 */
/* Ghidra symbol: FUN_0159fcc0 */


undefined8 FUN_0159fcc0(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    uVar2 = 0xfffffffe;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (param_2 < 0) {
      *(undefined4 *)(lVar1 + 0x40) = 0;
      *(undefined4 *)(lVar1 + 0x44) = 0;
      uVar2 = 0;
    }
    else if ((param_2 < 0x11) && ((uint)(*(int *)(lVar1 + 0x44) + param_2) < 0x21)) {
      *(uint *)(lVar1 + 0x40) =
           ((param_3 & (1 << ((byte)param_2 & 0x1f)) - 1U) <<
           ((byte)*(undefined4 *)(lVar1 + 0x44) & 0x1f)) + *(int *)(lVar1 + 0x40);
      *(int *)(lVar1 + 0x44) = *(int *)(lVar1 + 0x44) + param_2;
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

