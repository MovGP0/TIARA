/* Ghidra address: 00a7b180 */
/* Ghidra symbol: FUN_00a7b180 */


void FUN_00a7b180(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_29 [9];
  
  uVar2 = FUN_00605cc0(&PTR_FUN_005f86c8,1);
  FUN_004ae7e0(*(undefined8 *)(param_1 + 0xb0),uVar2);
  plVar3 = (longlong *)FUN_006056e0(&PTR_FUN_005f7f40,1,uVar2,0);
  FUN_005fdab0(plVar3[0x10],0xffffff);
  FUN_005fd4e0(plVar3[0xf],0xffffff);
  FUN_005fdcb0(plVar3[0x10],0);
  (**(code **)(*plVar3 + 0xf8))
            (plVar3,0,0,*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0xb8) == 0) {
    lVar1 = plVar3[0xe];
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
    FUN_005fcd80(lVar1,L"Arial");
    FUN_005fce30(plVar3[0xe],10);
    FUN_005fdcb0(plVar3[0x10],1);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0xb8));
  *(longlong **)(param_1 + 0xb8) = plVar3;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    local_29[0] = 0;
    (**(code **)(param_1 + 0xd8))
              (*(undefined8 *)(param_1 + 0xe0),param_1,
               *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x10),local_29);
  }
  return;
}

