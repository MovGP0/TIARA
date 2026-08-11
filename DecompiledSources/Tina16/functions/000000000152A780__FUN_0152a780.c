/* Ghidra address: 0152a780 */
/* Ghidra symbol: FUN_0152a780 */


void FUN_0152a780(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_2;
  uStack_40 = param_2[1];
  uStack_38 = param_2[2];
  uStack_30 = param_2[3];
  if (((*(byte *)((longlong)&local_48 + ((longlong)(ulonglong)*(byte *)(param_1 + 0x5db) >> 3)) >>
        ((ulonglong)*(byte *)(param_1 + 0x5db) & 7) & 1) != 0) &&
     (*(char *)(param_1 + 0x325) == '\0')) {
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(char *)(param_1 + 0x325) == '\0') {
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&LAB_0152a8b4,2);
      FUN_016f5430(param_1,1,0);
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_0152a8b2,0);
    }
    else {
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),1,&DAT_0152a8b0,0);
      FUN_016f6430(param_1,1,0);
      FUN_016f3620(param_1,0,1);
      FUN_01af25b0(*(undefined8 *)(param_1 + 0xf10),0,&DAT_0152a8b2,0);
    }
    FUN_017d9ab0(*(undefined8 *)(param_1 + 0xd8),0);
    if (*(char *)(param_1 + 0x324) != '\0') {
      uVar1 = FUN_01b04b70(&PTR_FUN_01af3038,1,param_1);
      FUN_004134c0(uVar1);
    }
  }
  return;
}

