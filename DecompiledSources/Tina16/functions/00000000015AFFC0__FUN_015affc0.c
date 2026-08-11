/* Ghidra address: 015affc0 */
/* Ghidra symbol: FUN_015affc0 */


/* WARNING: Removing unreachable block (ram,0x015affff) */

void FUN_015affc0(longlong param_1,undefined8 param_2,undefined4 param_3,byte param_4)

{
  undefined8 uVar1;
  bool bVar2;
  
  if (param_4 == 1) {
    if ((*(byte *)(param_1 + 0x20) & 2) != 0) {
      FUN_015af530(param_1,param_2,param_2,param_3);
    }
    FUN_015a9420(param_1,param_2,param_3,1);
  }
  else {
    uVar1 = param_2;
    FUN_015a9420(param_1,param_2,param_3,param_4);
    if (param_4 < 8) {
      bVar2 = ((byte)((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (param_4 & 0x1f)) &
              *(byte *)(param_1 + 0x20)) != 0;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      FUN_015ae9c0(param_1,param_2,param_2,param_3);
    }
  }
  return;
}

