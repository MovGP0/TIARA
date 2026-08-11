/* Ghidra address: 013f9ba0 */
/* Ghidra symbol: FUN_013f9ba0 */


void FUN_013f9ba0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414ad0(param_1 + 0x730,L"noname.flt");
  (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x2d0))
            (*(longlong **)(param_1 + 0x6e0),*(undefined4 *)(param_1 + 0x6e8),param_1 + 0x6f0);
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  uVar2 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
  *(undefined8 *)(param_1 + 0x708) = uVar2;
  FUN_01d3c090(uVar2,*(undefined8 *)(lVar1 + 8));
  uVar2 = FUN_01d3bfb0(0,&PTR_FUN_01d354b8,5,2);
  *(undefined8 *)(param_1 + 0x710) = uVar2;
  FUN_01d3c090(uVar2,*(undefined8 *)(lVar1 + 0x10));
  iVar3 = 0;
  do {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,local_20,iVar3 + 0x46f);
    (**(code **)(**(longlong **)(param_1 + 0x718) + 0x78))
              (*(longlong **)(param_1 + 0x718),local_20[0]);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 5);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x6d0) + 0x4e0) + 2;
  *(int *)(param_1 + 0x728) = iVar3;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6d0),iVar3);
  FUN_013f9a20(param_1);
  FUN_013f9d40(param_1);
  FUN_0064cf60(param_1,0x4a7);
  FUN_00414480(local_20);
  return;
}

