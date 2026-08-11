/* Ghidra address: 0144b910 */
/* Ghidra symbol: FUN_0144b910 */


void FUN_0144b910(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  if (*(char *)(param_2 + 0x92) == '\0') {
    iVar1 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
    iVar2 = FUN_0040c770(*(undefined8 *)(param_2 + 0x368));
    local_78 = 0;
    local_70 = 0;
    local_48 = 0x3ff0000000000000;
    local_40 = 0;
    local_58 = 0x3ff0000000000000;
    local_50 = 0;
    iVar3 = 1;
    if (0 < iVar2) {
      do {
        FUN_019b7940(param_2);
        local_68 = *(undefined8 *)(param_2 + 0x368 + (longlong)iVar3 * 8);
        local_60 = *(undefined8 *)(param_2 + 0x4b0 + (longlong)iVar3 * 8);
        FUN_00c44500(&local_78,&local_68,&local_68);
        FUN_01449560(&local_48,&local_68,&local_48,param_2);
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_68 = *(undefined8 *)(param_2 + 0xa0);
    local_60 = 0;
    FUN_01449560(&local_48,&local_68,&local_48,param_2);
    iVar2 = 1;
    if (0 < iVar1) {
      do {
        FUN_019b7940(param_2);
        local_68 = *(undefined8 *)(param_2 + 0xd8 + (longlong)iVar2 * 8);
        local_60 = *(undefined8 *)(param_2 + 0x220 + (longlong)iVar2 * 8);
        FUN_00c44500(&local_78,&local_68,&local_68);
        FUN_01449560(&local_58,&local_68,&local_58,param_2);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_01449410(&local_48,&local_58,param_1,param_2);
  }
  return;
}

