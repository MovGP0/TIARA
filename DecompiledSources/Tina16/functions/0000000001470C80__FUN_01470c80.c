/* Ghidra address: 01470c80 */
/* Ghidra symbol: FUN_01470c80 */


void FUN_01470c80(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res10 [3];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_60;
  longlong local_50;
  int local_44;
  char local_32;
  
  local_60 = auStack_a8;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_50 = *(longlong *)(param_1 + 0x800);
  local_32 = '\0';
  (**(code **)(**(longlong **)(local_50 + 200) + 0x90))(*(longlong **)(local_50 + 200));
  FUN_013bb8f0(local_50);
  if (local_32 == '\0') {
    local_88 = CONCAT44(local_88._4_4_,60000);
    local_80 = 0;
    local_78 = 0;
    local_44 = FUN_01054cd0(*(undefined8 *)(local_50 + 200),local_res10[0],
                            *(undefined8 *)(local_50 + 0x108),1);
    if (local_44 == 0x102) {
      (**(code **)(**(longlong **)(local_50 + 200) + 0x78))
                (*(longlong **)(local_50 + 200),L"Timeout received");
    }
    else {
      FUN_013ba1e0(local_50);
      FUN_013bbba0(local_50,0,6);
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x750) + 0x4e8);
    (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(local_50 + 200));
  }
  else {
    uVar2 = FUN_0065b870(param_1);
    uVar3 = FUN_00416740(*(undefined8 *)(local_50 + 0xf8));
    uVar4 = FUN_00416740(*(undefined8 *)(local_50 + 0x100));
    local_88 = FUN_00416740(*(undefined8 *)(local_50 + 0x108));
    local_80 = CONCAT44(local_80._4_4_,1);
    thunk_FUN_0419adcc(uVar2,L"open",uVar3,uVar4);
  }
  FUN_0146fd80(param_1);
  FUN_00414480(local_res10);
  return;
}

