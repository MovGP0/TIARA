/* Ghidra address: 00657060 */
/* Ghidra symbol: FUN_00657060 */


bool FUN_00657060(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_006485b0();
  if (lVar1 != 0) {
    uVar2 = FUN_0064fca0(lVar1,*param_2 + 0xbc00,*(undefined8 *)(param_2 + 2),
                         *(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar2;
  }
  return lVar1 != 0;
}

