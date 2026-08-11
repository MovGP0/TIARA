/* Ghidra address: 013f6290 */
/* Ghidra symbol: FUN_013f6290 */


void FUN_013f6290(longlong param_1)

{
  undefined *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0x2d0))
            (*(longlong **)(param_1 + 0x6f8),*(undefined4 *)(param_1 + 0x700),param_1 + 0x708);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),
               (double)*(float *)(*(longlong *)(param_1 + 0x708) + 0x10));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6e0),
               *(undefined1 *)(*(longlong *)(param_1 + 0x708) + 0x18));
  puVar1 = PTR_DAT_020012d0;
  puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 0x708) + 0x20);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)(PTR_DAT_020012d0 + 8);
    *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)PTR_DAT_020012d0;
    *(undefined8 *)(param_1 + 0x718) = *puVar5;
    *(undefined2 *)(param_1 + 0x720) = *(undefined2 *)(puVar1 + 0x10);
    *(undefined *)(param_1 + 0x722) = puVar1[0x12];
  }
  else {
    *(undefined8 *)(param_1 + 0x710) = *puVar5;
    *(undefined8 *)(param_1 + 0x718) = puVar5[1];
    *(undefined2 *)(param_1 + 0x720) = *(undefined2 *)(puVar5 + 2);
    *(undefined1 *)(param_1 + 0x722) = *(undefined1 *)((longlong)puVar5 + 0x12);
  }
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6f0),0);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar6 = 0;
  do {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,local_40,iVar6 + 0x24a);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_40[0]);
    iVar6 = iVar6 + 1;
  } while (iVar6 != 2);
  uVar3 = *(undefined8 *)(param_1 + 0x6f0);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_48,0x243);
  uVar4 = FUN_00b08760(&PTR_FUN_0142e950,1,param_1 + 0x710,0);
  FUN_00b0ab70(uVar3,local_48,uVar4);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_50,0x244);
  uVar4 = FUN_00b08760(&PTR_FUN_0142e950,1,param_1 + 0x714,1);
  FUN_00b0ab70(uVar3,local_50,uVar4);
  puVar5 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,param_1 + 0x718,2);
  (**(code **)*puVar5)(puVar5,plVar2);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_58,0x245);
  FUN_00b0ab70(uVar3,local_58,puVar5);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_60,0x246);
  uVar4 = FUN_00b08760(&PTR_FUN_0142e950,1,param_1 + 0x719,3);
  FUN_00b0ab70(uVar3,local_60,uVar4);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_68,0x247);
  uVar4 = FUN_00b08760(&PTR_FUN_0142e950,1,param_1 + 0x71d,4);
  FUN_00b0ab70(uVar3,local_68,uVar4);
  puVar5 = (undefined8 *)FUN_01430100(&PTR_FUN_0142b460,1,param_1 + 0x721,5);
  (**(code **)*puVar5)(puVar5,plVar2);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_70,0x248);
  FUN_00b0ab70(uVar3,local_70,puVar5);
  uVar4 = FUN_00b89270();
  FUN_00b8e520(uVar4,&local_78,0x249);
  uVar4 = FUN_00b08760(&PTR_FUN_0142e6a0,1,param_1 + 0x722,6);
  FUN_00b0ab70(uVar3,local_78,uVar4);
  FUN_00410f20(plVar2);
  FUN_0064cf60(param_1,0x407);
  FUN_00414560(&local_78,8);
  return;
}

