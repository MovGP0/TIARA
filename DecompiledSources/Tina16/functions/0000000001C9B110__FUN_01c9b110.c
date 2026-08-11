/* Ghidra address: 01c9b110 */
/* Ghidra symbol: FUN_01c9b110 */


void FUN_01c9b110(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00441a10(&local_28,local_res10[0]);
  FUN_0043e1a0(local_20,local_28);
  FUN_00414b50(param_1 + 0x138,local_20[0]);
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x138) + -4);
  }
  FUN_00416dc0(param_1 + 0x138,*(undefined8 *)(param_1 + 0x138),2,uVar4);
  iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_01c9b444);
  if (iVar3 == 0) {
    FUN_00416ba0(param_1 + 0x130,L"Verilog File|*.",*(undefined8 *)(param_1 + 0x138));
  }
  else {
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x138),&DAT_01c9b480);
    if (iVar3 == 0) {
      FUN_00416ba0(param_1 + 0x130,L"Vhdl File|*.",*(undefined8 *)(param_1 + 0x138));
    }
    else {
      FUN_00416ba0(param_1 + 0x130,L"Text File|*.",*(undefined8 *)(param_1 + 0x138));
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0xd8))
            (*(longlong **)(param_1 + 0x128),local_res10[0]);
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x12a0) + 0x100,
               *(undefined8 *)(param_1 + 0x138));
  FUN_00414ad0(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0x12a0) + 0xe0,
               *(undefined8 *)(param_1 + 0x130));
  if (param_3 == *(int *)(*(longlong *)(param_1 + 0x120) + 0x7ec)) {
    FUN_00416cd0(local_res10,3,*(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x790),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x120) + 0x758),L".vhd");
  }
  FUN_00441920(&local_30,local_res10[0]);
  FUN_00724380(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x12a0),local_30);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x170) + 0x12a0);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  if (cVar2 != '\0') {
    FUN_00724270(*(undefined8 *)(*(longlong *)(param_1 + 0x170) + 0x12a0),&local_38);
    FUN_00414b50(param_1 + 0x118,local_38);
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x100))
              (*(longlong **)(param_1 + 0x128),*(undefined8 *)(param_1 + 0x118));
  }
  FUN_00414480(&local_38);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res10);
  return;
}

