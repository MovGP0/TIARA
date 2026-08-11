/* Ghidra address: 0084d770 */
/* Ghidra symbol: FUN_0084d770 */


void FUN_0084d770(longlong param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_00411a80(param_1,param_2);
  lVar1 = FUN_00410e60(&DAT_0084d6e0,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(&local_28,lVar2);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = lVar1 + 0x18;
  }
  FUN_0041b840(local_20,lVar1);
  if (*(longlong *)(param_1 + 0x608) != 0) {
    FUN_0084bcc0(*(undefined8 *)(param_1 + 0x608),local_20[0]);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x608));
  }
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FUN_0084bcc0(*(undefined8 *)(param_1 + 0x610),local_20[0]);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x610));
  }
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FUN_0084bcc0(*(undefined8 *)(param_1 + 0x600),local_20[0]);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x600));
  }
  FUN_0083ede0(param_1,param_2 & 0xfc);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

