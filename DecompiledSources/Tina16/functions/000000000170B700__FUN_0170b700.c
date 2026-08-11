/* Ghidra address: 0170b700 */
/* Ghidra symbol: FUN_0170b700 */


void FUN_0170b700(longlong param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  FUN_0170a8c0(param_1,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                (*(longlong **)(param_1 + 0x30),&local_38,iVar3);
      FUN_00441920(local_30,local_38);
      FUN_01709e70(param_1,L"Parsing data",local_30[0]);
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                (*(longlong **)(param_1 + 0x30),&local_40,iVar3);
      uVar2 = FUN_004b9860(&PTR_FUN_0047c498,1,local_40,0x20);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      FUN_0170b5e0();
      FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

