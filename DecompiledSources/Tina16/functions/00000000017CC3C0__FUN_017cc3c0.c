/* Ghidra address: 017cc3c0 */
/* Ghidra symbol: FUN_017cc3c0 */


void FUN_017cc3c0(byte param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  uVar2 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  (**(code **)*DAT_02110100)(DAT_02110100);
  if (*(longlong *)PTR_DAT_02005188 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02005188);
  }
  if (*(longlong *)PTR_DAT_02004fb8 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_02004fb8);
  }
  if (*(longlong *)PTR_DAT_020038e8 != 0) {
    FUN_01cc6030(*(undefined8 *)PTR_DAT_020038e8);
  }
  *(undefined8 *)PTR_DAT_020038e8 = 0;
  *(undefined8 *)PTR_DAT_02005188 = 0;
  *(undefined8 *)PTR_DAT_02004fb8 = 0;
  *(undefined8 *)PTR_DAT_02001d00 = 0;
  if (param_1 < 0x10) {
    uVar1 = CONCAT71(4,((int)CONCAT62((int6)(uVar2 >> 0x10),1) << (param_1 & 0x1f) & 0x49fU) != 0);
  }
  else {
    uVar1 = 0;
  }
  if ((char)uVar1 != '\0') {
    local_38 = local_res20;
    local_30 = 0;
    FUN_017cc020(PTR_DAT_02005188,param_1,param_2 & 0xff,local_res18);
    FUN_01cc6020(*(undefined8 *)PTR_DAT_02005188);
    local_38 = local_res20;
    local_30 = 0;
    FUN_017cc020(PTR_DAT_02004fb8,0xb,param_2 & 0xff,local_res18);
    uVar1 = FUN_01cc6020(*(undefined8 *)PTR_DAT_02004fb8);
  }
  if (param_1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar1 >> 8),1) << (param_1 & 0x1f) & 8U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    local_38 = local_res20;
    local_30 = 0;
    FUN_017cc020(PTR_DAT_020038e8,param_1,param_2 & 0xff,local_res18);
    FUN_01cc6020(*(undefined8 *)PTR_DAT_020038e8);
  }
  *(undefined8 *)PTR_DAT_02001288 = 0;
  (**(code **)(*DAT_02110100 + 8))(DAT_02110100);
  FUN_00414560(&local_res18,2);
  return;
}

