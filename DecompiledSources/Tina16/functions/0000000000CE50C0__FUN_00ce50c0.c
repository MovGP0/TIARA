/* Ghidra address: 00ce50c0 */
/* Ghidra symbol: FUN_00ce50c0 */


void FUN_00ce50c0(longlong param_1)

{
  undefined2 uVar1;
  char *local_20;
  undefined8 local_18;
  byte *local_10;
  
  local_10 = (byte *)0x0;
  local_18 = 0;
  local_20 = (char *)0x0;
  FUN_00419260(&local_10,&DAT_0086e978,1,1);
  FUN_00419260(&local_18,&DAT_0086e978,1,2);
  FUN_00419260(&local_20,&DAT_0086e978,1,1);
  FUN_0086e910(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),3,1);
  FUN_0086e810(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),&local_10,1,0);
  FUN_0086e910(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),6,1);
  if ((*local_10 & 4) == 4) {
    FUN_0086e810(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),&local_18,2,0);
    uVar1 = FUN_00878390(local_18,0);
    FUN_0086e910(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),uVar1,1);
  }
  if ((*local_10 & 8) == 8) {
    do {
      FUN_0086e810(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),&local_20,1,0);
    } while (*local_20 != '\0');
  }
  if ((*local_10 & 0x10) == 0x10) {
    do {
      FUN_0086e810(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),&local_20,1,0);
    } while (*local_20 != '\0');
  }
  if ((*local_10 & 2) == 2) {
    FUN_0086e910(&LAB_0086e608,*(undefined8 *)(param_1 + 0x78),2,1);
  }
  FUN_00417840(&local_20,&DAT_0086e978,3);
  return;
}

