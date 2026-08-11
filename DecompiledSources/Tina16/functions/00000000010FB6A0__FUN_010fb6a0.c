/* Ghidra address: 010fb6a0 */
/* Ghidra symbol: FUN_010fb6a0 */


void FUN_010fb6a0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  undefined8 local_30 [2];
  
  lVar1 = param_1[0x136];
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x50) != 0)) {
    uVar5 = *(undefined8 *)(lVar1 + 0x50);
    local_30[0] = 0;
    cVar2 = FUN_01acff30(uVar5,local_30);
    if (cVar2 == '\0') {
      cVar3 = '\0';
    }
    else {
      uVar4 = FUN_004aeac0(local_30[0],0);
      cVar3 = FUN_01ad1090(uVar5,uVar4,local_38);
    }
    if (cVar2 == '\x01') {
      (**(code **)(*param_1 + 0x388))(param_1);
      if (cVar3 == '\0') {
        FUN_00410f20(local_30[0]);
        return;
      }
      uVar5 = FUN_004aeac0(local_30[0],0);
      FUN_01cd6670(uVar5);
      FUN_007e2da0(param_1[0x150],1);
    }
    else if (cVar2 == '\x02') {
      (**(code **)(*param_1 + 0x380))(param_1);
      if (cVar3 == '\0') {
        FUN_00410f20(local_30[0]);
        return;
      }
      FUN_007e2da0(param_1[0x150],0);
    }
    else if (cVar2 == '\x04') {
      (**(code **)(*param_1 + 0x390))(param_1);
      FUN_007e2da0(param_1[0x150],0);
    }
    else if (cVar2 == '\b') {
      (**(code **)(*param_1 + 0x3a0))(param_1);
      FUN_007e2da0(param_1[0x150],1);
    }
    else {
      (**(code **)(*param_1 + 0x398))(param_1);
      FUN_007e2da0(param_1[0x150],0);
    }
    FUN_00410f20(local_30[0]);
  }
  return;
}

