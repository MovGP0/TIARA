/* Ghidra address: 0085b000 */
/* Ghidra symbol: FUN_0085b000 */


longlong * FUN_0085b000(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)
           FUN_00687cb0(&PTR_FUN_00673008,1,*(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x88));
  (**(code **)(*plVar3 + 0x130))(plVar3,*(undefined8 *)(param_1 + 0x2d8));
  uVar4 = FUN_007ffbe0(*(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x88));
  iVar1 = FUN_005fdff0(uVar4,param_2);
  *(int *)(param_1 + 700) = *(int *)(param_1 + 700) - (iVar1 + 0x34);
  lVar5 = FUN_0040c840((double)*(int *)(param_1 + 0x2d0) / 2.0);
  if (*(int *)(param_1 + 700) < lVar5) {
    *(int *)(param_1 + 700) = *(int *)(param_1 + 0x368) - (iVar1 + 0x34);
    *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2cc) + 0x20;
  }
  if (*(char *)(param_1 + 0x380) == '\0') {
    uVar2 = FUN_0085a380(0x1c);
    (**(code **)(*plVar3 + 400))
              (plVar3,*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x2cc),iVar1 + 0x28,
               uVar2);
  }
  else {
    uVar2 = FUN_0085a380(0x16);
    (**(code **)(*plVar3 + 400))
              (plVar3,*(undefined4 *)(param_1 + 700),*(undefined4 *)(param_1 + 0x2cc),iVar1 + 0x2a,
               uVar2);
  }
  FUN_0064de00(plVar3,param_2);
  *(int *)(plVar3 + 0x9e) = param_3;
  FUN_0065bcb0(plVar3,*(undefined2 *)(param_1 + 0x2ba));
  plVar3[0x40] = *(longlong *)(*(longlong *)(param_1 + 0x330) + 0x88);
  plVar3[0x3f] = (longlong)FUN_0085d640;
  if (param_3 == 1) {
    FUN_00688430(plVar3,1);
    if (*(char *)(param_1 + 0x338) == '\x01') {
      *(undefined1 *)((longlong)plVar3 + 0x499) = 1;
    }
  }
  else if (param_3 == 2) {
    *(undefined1 *)((longlong)plVar3 + 0x499) = 1;
  }
  if (param_3 == *(int *)(param_1 + 0x340)) {
    FUN_00801e40(*(undefined8 *)(*(longlong *)(param_1 + 0x330) + 0x88),plVar3);
  }
  return plVar3;
}

