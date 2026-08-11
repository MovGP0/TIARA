/* Ghidra address: 00c387c0 */
/* Ghidra symbol: FUN_00c387c0 */


void FUN_00c387c0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined1 local_38 [16];
  longlong *local_28;
  undefined8 local_20;
  
  local_50 = auStack_78;
  local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_28 + 0x70))(local_28,*(undefined4 *)((longlong)param_1 + 0x9c));
  (**(code **)(*local_28 + 0x88))(local_28,(int)param_1[0x13]);
  FUN_00c38a30(param_1,local_28);
  (**(code **)(*param_1 + 0xe0))(param_1,local_38);
  if (*(char *)((longlong)param_1 + 0x326) == '\x01') {
    thunk_FUN_04176532(local_38,0xffffffff,0xffffffff);
  }
  local_20 = FUN_00608c80(&PTR_FUN_00c38340,1);
  FUN_00c38510(local_20,local_28);
  FUN_00c38a30(param_1,local_20);
  cVar1 = *(char *)((longlong)param_1 + 0x324);
  if ((byte)(cVar1 - 1U) == 0xff) {
    FUN_00c38cb0(param_1,local_20,local_38);
  }
  else if ((byte)(cVar1 - 1U) < 2) {
    FUN_00c38d10(param_1,local_20,local_38);
  }
  else if (cVar1 == '\x03') {
    FUN_00c38e60(param_1,local_20,local_38);
  }
  else if (cVar1 == '\x04') {
    FUN_00c39050(param_1,local_20,local_38);
  }
  lVar2 = FUN_00609e10(local_28);
  *(undefined4 *)(lVar2 + 0x90) = 0x660046;
  plVar3 = (longlong *)FUN_00609e10(local_28);
  (**(code **)(*plVar3 + 0x88))(plVar3,0,0,local_20);
  lVar2 = FUN_00609e10(local_28);
  *(undefined4 *)(lVar2 + 0x90) = 0xcc0020;
  if (*(char *)((longlong)param_1 + 0x325) != '\0') {
    FUN_00c38ab0(param_1,local_28,local_38);
  }
  FUN_00410f20(local_20);
  plVar3 = (longlong *)param_1[0x62];
  *(undefined4 *)(plVar3 + 0x12) = 0xcc0020;
  (**(code **)(*plVar3 + 0x88))(plVar3,0,0,local_28);
  (**(code **)(*local_28 + -0x20))(local_28,1);
  return;
}

