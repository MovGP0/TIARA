/* Ghidra address: 013ab6e0 */
/* Ghidra symbol: FUN_013ab6e0 */


void FUN_013ab6e0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6b8));
  lVar3 = FUN_006dd390(uVar2);
  if (lVar3 != 0) {
    lVar3 = FUN_006e2530(*(undefined8 *)(param_1 + 0x6b8));
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      cVar1 = FUN_01d3be30(*(longlong *)(lVar3 + 0x18));
      if (cVar1 != '\0') {
        FUN_01c77050(*(undefined8 *)PTR_DAT_02004e40,param_2);
      }
    }
  }
  return;
}

