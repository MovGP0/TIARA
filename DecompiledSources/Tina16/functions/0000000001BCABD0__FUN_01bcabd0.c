/* Ghidra address: 01bcabd0 */
/* Ghidra symbol: FUN_01bcabd0 */


void FUN_01bcabd0(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[0xb5] != 0) {
    cVar1 = FUN_00781870();
    if (((cVar1 != '\0') && ((*(byte *)(param_1 + 0x59) & 4) != 0)) &&
       (cVar1 = FUN_01bcaba0(param_1), cVar1 == '\0')) {
      uVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,10);
      *(undefined4 *)(param_1 + 0xaf) = uVar2;
      uVar2 = (**(code **)(*param_1 + 0x1a0))(param_1,9);
      *(undefined4 *)((longlong)param_1 + 0x57c) = uVar2;
      lVar3 = FUN_00652880(&PTR_FUN_01bc6ac8,1,param_1);
      param_1[0xb4] = lVar3;
      FUN_0064dbe0(lVar3,0);
      *(undefined1 *)(param_1[0xb4] + 0x490) = 1;
      lVar3 = FUN_00652880(&PTR_FUN_01bc6ac8,1,param_1);
      param_1[0xb2] = lVar3;
      FUN_0064dbe0(lVar3,0);
      plVar4 = (longlong *)FUN_0068e2d0(&PTR_FUN_00679048,1,param_1);
      param_1[0xb0] = (longlong)plVar4;
      (**(code **)(*plVar4 + 0x130))(plVar4,param_1[0xb2]);
      FUN_0068e690(param_1[0xb0],1);
      FUN_0064dbe0(param_1[0xb0],1);
      FUN_0064c650(param_1[0xb0],5);
      FUN_0065bbd0(param_1[0xb0],0);
      FUN_0065bb80(param_1[0xb0],0);
      lVar3 = param_1[0xb0];
      *(longlong **)(lVar3 + 0x4b8) = param_1;
      *(code **)(lVar3 + 0x4b0) = FUN_01bcc290;
      lVar3 = FUN_00652880(&PTR_FUN_01bc6ac8,1,param_1);
      param_1[0xb3] = lVar3;
      FUN_0064dbe0(lVar3,0);
      plVar4 = (longlong *)FUN_0068e2d0(&PTR_FUN_00679048,1,param_1);
      param_1[0xb1] = (longlong)plVar4;
      (**(code **)(*plVar4 + 0x130))(plVar4,param_1[0xb3]);
      FUN_0065bbd0(param_1[0xb1],0);
      FUN_0065bb80(param_1[0xb1],0);
      FUN_0064dbe0(param_1[0xb1],1);
      FUN_0064c650(param_1[0xb1],5);
      lVar3 = param_1[0xb1];
      *(longlong **)(lVar3 + 0x4b8) = param_1;
      *(code **)(lVar3 + 0x4b0) = FUN_01bcc440;
      (**(code **)(*(longlong *)param_1[0xb3] + 0x130))((longlong *)param_1[0xb3],param_1[0xb5]);
      (**(code **)(*(longlong *)param_1[0xb2] + 0x130))((longlong *)param_1[0xb2],param_1[0xb5]);
      (**(code **)(*(longlong *)param_1[0xb4] + 0x130))((longlong *)param_1[0xb4],param_1[0xb5]);
      FUN_01bcb060(param_1);
      return;
    }
    cVar1 = FUN_00781870();
    if (((cVar1 != '\0') && ((*(byte *)(param_1 + 0x59) & 4) != 0)) &&
       (cVar1 = FUN_01bcaba0(param_1), cVar1 != '\0')) {
      FUN_01bcab40(param_1,param_1[0xb2]);
      FUN_01bcab40(param_1,param_1[0xb3]);
      FUN_01bcab40(param_1,param_1[0xb4]);
      FUN_01bcaee0(param_1,0);
      FUN_01bcb060(param_1);
      return;
    }
    cVar1 = FUN_00781870();
    if (cVar1 != '\0') {
      cVar1 = FUN_00781870();
      if (cVar1 == '\0') {
        return;
      }
      if ((*(byte *)(param_1 + 0x59) & 4) != 0) {
        return;
      }
    }
    cVar1 = FUN_01bcaba0(param_1);
    if (cVar1 != '\0') {
      FUN_0064dbe0(param_1[0xb2],0);
      FUN_0064dbe0(param_1[0xb4],0);
      FUN_0064dbe0(param_1[0xb3],0);
    }
  }
  return;
}

