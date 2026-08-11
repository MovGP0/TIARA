/* Ghidra address: 012ce890 */
/* Ghidra symbol: FUN_012ce890 */


int FUN_012ce890(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  longlong *local_20 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = (longlong *)0x0;
  local_20[0] = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_30 = 0;
  local_38 = 0;
  local_6c = 0;
  (**(code **)(**(longlong **)(param_1 + 0x118) + 0x100))(*(longlong **)(param_1 + 0x118),&local_40)
  ;
  (**(code **)(*local_40 + 0xe8))(local_40,local_20,L"/testbench/testcase");
  (**(code **)(*local_20[0] + 0x68))(local_20[0]);
  (**(code **)(*local_20[0] + 0x70))(local_20[0],&local_48);
  FUN_0041b890(&local_28,local_48,&DAT_012cec18);
  while (local_28 != (longlong *)0x0) {
    (**(code **)(*local_28 + 0x100))(local_28,&local_30,L"folder");
    (**(code **)(*local_28 + 0x100))(local_28,&local_38,L"circuit");
    local_6c = local_6c + 1;
    iVar2 = FUN_00416db0(local_30,&DAT_012cec6c);
    if (iVar2 == 0) {
      FUN_00416ba0(&local_30,*(undefined8 *)(param_1 + 0x110),local_30);
    }
    else {
      FUN_00416cd0(&local_30,4,*(undefined8 *)(param_1 + 0x110),&DAT_012cec6c,local_30,&DAT_012cec6c
                  );
    }
    lVar1 = *(longlong *)(param_1 + 0x148);
    FUN_00416cd0(&local_50,3,local_30,local_38,L".TSC");
    if (lVar1 == local_50) {
      bVar3 = true;
    }
    else if ((lVar1 == 0) || (FUN_00416cd0(&local_58,3,local_30,local_38,L".TSC"), local_58 == 0)) {
      bVar3 = false;
    }
    else {
      FUN_00416cd0(&local_60,3,local_30,local_38,L".TSC");
      iVar2 = FUN_0043e420(lVar1,local_60);
      bVar3 = iVar2 == 0;
    }
    if (bVar3) break;
    (**(code **)(*local_20[0] + 0x70))(local_20[0],&local_68);
    FUN_0041b890(&local_28,local_68,&DAT_012cec18);
  }
  FUN_0041b800(&local_68);
  FUN_00414560(&local_60,3);
  FUN_0041b800(&local_48);
  FUN_0041b800(&local_40);
  FUN_00414560(&local_38,2);
  FUN_0041b800(&local_28);
  FUN_0041b800(local_20);
  return local_6c;
}

