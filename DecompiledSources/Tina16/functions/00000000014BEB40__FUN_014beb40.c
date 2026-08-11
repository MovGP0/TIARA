/* Ghidra address: 014beb40 */
/* Ghidra symbol: FUN_014beb40 */


undefined8 FUN_014beb40(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_00414480(param_2);
  lVar1 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6d8));
  lVar2 = FUN_006f6fe0(*(undefined8 *)(param_1 + 0x6e8));
  if ((lVar1 != 0) && (lVar2 != 0)) {
    FUN_00416cd0(param_2,3,*(undefined8 *)(*(longlong *)(lVar1 + 0x18) + 0x10),&DAT_014bebb8,
                 *(undefined8 *)(lVar2 + 0x30));
  }
  return param_2;
}

