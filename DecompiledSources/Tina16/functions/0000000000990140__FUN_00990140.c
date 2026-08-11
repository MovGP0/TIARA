/* Ghidra address: 00990140 */
/* Ghidra symbol: FUN_00990140 */


void FUN_00990140(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  lVar2 = FUN_00410e60(&DAT_00990068,1);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x10;
  }
  FUN_0041b840(&local_30,lVar3);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar2 + 0x20;
  }
  lVar3 = FUN_009abb40(&PTR_FUN_0098fcf0,1,lVar3);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar3 + 0x18;
  }
  FUN_0041b840(local_20,lVar3);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x18;
  }
  lVar2 = FUN_009abb40(&PTR_FUN_0098fcf0,1,lVar2);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar2 + 0x18;
  }
  FUN_0041b840(&local_28,lVar2);
  cVar1 = (**(code **)(*param_1 + 0xe8))(param_1);
  if (cVar1 == '\0') {
    FUN_009ab030(param_1[9],local_20[0]);
  }
  else {
    FUN_009ab030(param_1[9],local_28);
  }
  FUN_0041b800(&local_30);
  FUN_00417840(&local_28,&DAT_00945948,2);
  return;
}

