/* Ghidra address: 01bd39c0 */
/* Ghidra symbol: FUN_01bd39c0 */


void FUN_01bd39c0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 local_28 [16];
  
  FUN_01c05af0(param_1);
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 == '\0') {
    FUN_005fd6d0(*(undefined8 *)(param_1[0x62] + 0x78),1);
    (**(code **)(*param_1 + 0xe0))(param_1,local_28);
    uVar3 = (**(code **)(*param_1 + 0x228))(param_1);
    if (((char)uVar3 == '\0') && (*(char *)((longlong)param_1 + 0x366) != '\x02')) {
      uVar2 = 0;
    }
    else {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    (**(code **)(*param_1 + 0x270))(param_1,local_28,uVar2);
  }
  return;
}

