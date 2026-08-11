/* Ghidra address: 014e0a90 */
/* Ghidra symbol: FUN_014e0a90 */


void FUN_014e0a90(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined4 local_50 [5];
  undefined1 local_3a;
  undefined1 local_39;
  longlong local_38;
  undefined8 *local_30;
  
  uVar4 = (**(code **)(*param_1 + 0xf8))(param_1);
  if (uVar4 < 0x2c1) {
    if (uVar4 == 0x2c0) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      lVar1 = *(longlong *)((longlong)local_30 + 0x26);
      FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                   *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f59f31);
    }
    else if (uVar4 < 0x7d) {
      if ((uVar4 == 0x7c) || (uVar4 == 0x79)) {
        uVar7 = FUN_01cfd6a0(param_1);
        FUN_014dd530(param_1,0xc,uVar7,0,0,param_2,&DAT_01f59b8a);
      }
      else if (uVar4 == 0x7a) {
        uVar7 = FUN_01cfd6a0(param_1);
        FUN_014dd530(param_1,9,uVar7,0,0,param_2,&DAT_01f59b8a);
      }
      else if (uVar4 == 0x7b) {
        uVar7 = FUN_01cfd6a0(param_1);
        FUN_014dd530(param_1,10,uVar7,0,0,param_2,&DAT_01f59b8a);
      }
    }
    else if (uVar4 == 0x2be) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      lVar1 = *(longlong *)((longlong)local_30 + 0x26);
      FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                   *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f59c56);
    }
    else if (uVar4 == 0x2bf) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      lVar1 = *(longlong *)((longlong)local_30 + 0x26);
      FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                   *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f59dcc);
    }
  }
  else if (uVar4 < 0x2c5) {
    if (uVar4 == 0x2c4) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      lVar1 = *(longlong *)((longlong)local_30 + 0x26);
      FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                   *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f5a64c);
    }
    else if (uVar4 == 0x2c1) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      lVar1 = *(longlong *)((longlong)local_30 + 0x26);
      FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                   *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f5a0da);
    }
    else if (uVar4 == 0x2c2) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      lVar1 = *(longlong *)((longlong)local_30 + 0x26);
      FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                   *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f5a272);
    }
    else if (uVar4 == 0x2c3) {
      (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
      lVar1 = *(longlong *)((longlong)local_30 + 0x26);
      FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                   *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f5a44e);
    }
  }
  else if (uVar4 == 0x2c5) {
    (**(code **)(*param_1 + 0x2d0))(param_1,0,&local_30);
    lVar1 = *(longlong *)((longlong)local_30 + 0x26);
    FUN_014dd530(param_1,*(undefined2 *)(lVar1 + 0x21),*(undefined8 *)(lVar1 + 9),
                 *(undefined8 *)(lVar1 + 1),0,param_2,&DAT_01f5a64c);
  }
  else if (uVar4 == 0x3e81) {
    cVar2 = FUN_014db910(&DAT_014e1158,param_2,&local_38);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,1,&local_30);
      uVar3 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *(undefined1 *)local_30 = uVar3;
    }
    cVar2 = FUN_014db910(&DAT_014e115e,param_2,&local_38);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,2,&local_30);
      uVar3 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *(undefined1 *)local_30 = uVar3;
    }
    local_50[0] = 0x4c454403;
    cVar2 = FUN_014db910(local_50,param_2,&local_38);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x2d0))(param_1,3,&local_30);
      uVar3 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *(undefined1 *)local_30 = uVar3;
    }
    puVar6 = (undefined1 *)FUN_01cfdcb0(param_1,1,&local_39);
    cVar2 = FUN_014db910(&DAT_014e1169,param_2,&local_38);
    if (cVar2 != '\0') {
      uVar3 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *puVar6 = uVar3;
    }
    cVar2 = FUN_014db910(&DAT_014e1171,param_2,&local_38);
    if (cVar2 != '\0') {
      local_30 = (undefined8 *)FUN_01cfdd50(param_1,puVar6,1,&local_3a);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    cVar2 = FUN_014db910(&DAT_014e1178,param_2,&local_38);
    if (cVar2 != '\0') {
      local_30 = (undefined8 *)FUN_01cfdd50(param_1,puVar6,2,&local_3a);
      *local_30 = *(undefined8 *)(local_38 + 0x28);
    }
    cVar2 = FUN_014db910(&DAT_014e117f,param_2,&local_38);
    if (cVar2 != '\0') {
      local_30 = (undefined8 *)FUN_01cfdd50(param_1,puVar6,3,&local_3a);
      uVar5 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *(undefined2 *)local_30 = uVar5;
    }
    cVar2 = FUN_014db910(&DAT_014e1185,param_2,&local_38);
    if (cVar2 != '\0') {
      local_30 = (undefined8 *)FUN_01cfdd50(param_1,puVar6,4,&local_3a);
      uVar5 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *(undefined2 *)local_30 = uVar5;
    }
    cVar2 = FUN_014db910(&DAT_014e118e,param_2,&local_38);
    if (cVar2 != '\0') {
      local_30 = (undefined8 *)FUN_01cfdd50(param_1,puVar6,5,&local_3a);
      uVar5 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *(undefined2 *)local_30 = uVar5;
    }
    cVar2 = FUN_014db910(&DAT_014e1197,param_2,&local_38);
    if (cVar2 != '\0') {
      local_30 = (undefined8 *)FUN_01cfdd50(param_1,puVar6,6,&local_3a);
      uVar5 = FUN_0040c770(*(undefined8 *)(local_38 + 0x28));
      *(undefined2 *)local_30 = uVar5;
    }
  }
  return;
}

