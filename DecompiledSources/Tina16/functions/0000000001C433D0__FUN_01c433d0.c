/* Ghidra address: 01c433d0 */
/* Ghidra symbol: FUN_01c433d0 */


void FUN_01c433d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x290) + 0x990);
  if (lVar1 != 0) {
    FUN_00410f20(lVar1);
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x290) + 0x990) = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x290) + 0x998);
  if (lVar1 != 0) {
    uVar2 = FUN_00442620(*(longlong *)(param_2 + 0x290) + 0x9a8,
                         *(undefined8 *)(*(longlong *)(param_2 + 0x290) + 0x9a0));
    FUN_015fcd60(lVar1,uVar2,0);
    *(undefined8 *)(*(longlong *)(param_2 + 0x290) + 0x998) = 0;
  }
  FUN_015fcbd0(PTR_DAT_02004770,0);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x268));
  return;
}

