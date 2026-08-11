/* Ghidra address: 00d7bf10 */
/* Ghidra symbol: FUN_00d7bf10 */


void FUN_00d7bf10(longlong param_1,longlong param_2)

{
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (((*(char *)(param_1 + 0x99) == '\x01') && (0 < *(int *)(param_1 + 0x84))) &&
     (0 < *(int *)(param_1 + 0x88))) {
    FUN_00d77cb0(param_1,local_38);
    FUN_00d57cd0(param_2,local_38,0xffffff);
    FUN_00d77cb0(param_1,local_38);
    FUN_00d57d20(param_2,local_38,0);
    FUN_005fcd80(*(undefined8 *)(param_2 + 0x70),L"Arial");
    FUN_005fce70(*(undefined8 *)(param_2 + 0x70),2);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),0);
    FUN_00d77cb0(param_1,local_28);
    FUN_00d57750(param_2,*(undefined8 *)(param_1 + 0x120),local_28,0x25);
  }
  return;
}

