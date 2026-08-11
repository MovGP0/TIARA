/* Ghidra address: 00d88f20 */
/* Ghidra symbol: FUN_00d88f20 */


void FUN_00d88f20(longlong param_1,wchar_t *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  bool bVar5;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 local_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  local_2c = *(undefined4 *)(param_4 + 2);
  plVar1 = (longlong *)0x0;
  if ((char)local_2c == '\0') {
    param_2 = L"SectionFirst";
    plVar1 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80),L"SectionFirst");
  }
  if ((char)local_2c == '\x02') {
    param_2 = L"SectionLast";
    plVar1 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80),L"SectionLast");
  }
  if (plVar1 == (longlong *)0x0) {
    param_2 = L"Section";
    plVar1 = (longlong *)
             FUN_00d77610(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80),L"Section");
  }
  if (plVar1 != (longlong *)0x0) {
    if (local_2c._1_1_ < 8) {
      uVar2 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (local_2c._1_1_ & 0x1f);
      param_2 = (wchar_t *)(ulonglong)uVar2;
      bVar5 = (uVar2 & 0x44) != 0;
    }
    else {
      bVar5 = false;
    }
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    if (bVar5) {
      uVar3 = CONCAT71(uVar4,8);
    }
    else {
      if (local_2c._1_1_ < 8) {
        bVar5 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (local_2c._1_1_ & 0x1f) & 0x22U
                ) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        uVar3 = CONCAT71(uVar4,6);
      }
      else if (local_2c._1_1_ < 8 && (1 << (local_2c._1_1_ & 0x1f) & 0x18U) != 0) {
        uVar3 = CONCAT71(uVar4,5);
      }
      else {
        uVar3 = 0;
      }
    }
    FUN_00d77b90(plVar1,&local_3c);
    (**(code **)(*plVar1 + 0x98))(plVar1,uVar3 & 0xffffffff);
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_3,&DAT_01ecf394);
  }
  return;
}

