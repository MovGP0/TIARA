/* Ghidra address: 0195fad0 */
/* Ghidra symbol: FUN_0195fad0 */


void FUN_0195fad0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined8 in_stack_ffffffffffffff38;
  undefined8 uVar13;
  undefined1 local_88 [16];
  longlong local_78;
  longlong lStack_70;
  
  lVar10 = FUN_01953870(param_1);
  uVar3 = FUN_0195f670(param_1,0xb);
  *(undefined1 *)(lVar10 + 0xac) = uVar3;
  *(undefined1 *)(lVar10 + 0xab) = *(undefined1 *)((longlong)param_1 + 0x219);
  FUN_018d6e10(lVar10,param_1[0xf]);
  uVar3 = FUN_0195f670(param_1,9);
  uVar8 = FUN_0195f670(param_1,1);
  uVar9 = FUN_0195f670(param_1,6);
  uVar4 = FUN_0195f670(param_1,8);
  uVar5 = FUN_0195f670(param_1,3);
  uVar6 = FUN_0195f670(param_1,10);
  uVar13 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff38 >> 8),uVar4);
  FUN_018d6ff0(lVar10,uVar3,uVar8,uVar9,uVar13,uVar5,uVar6,(int)param_1[99]);
  uVar8 = (undefined4)((ulonglong)uVar13 >> 0x20);
  FUN_018d70b0(lVar10,param_1[0x62],param_1[0x58],param_1[0x60]);
  cVar7 = FUN_01953ba0(param_1);
  if (cVar7 == '\0') {
    cVar7 = FUN_0195f670(param_1,2);
    if (cVar7 != '\0') {
      FUN_00498350(&local_78,0,0,10000,CONCAT44(uVar8,10000));
      FUN_00498350(local_88,0,0,10000,10000);
      FUN_018d7050(lVar10,0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,&local_78,
                   local_88);
      FUN_018d70c0(lVar10,param_1[0x61],0,0);
      dVar1 = (double)param_1[0x15];
      if (((int)param_1[99] == 0x5a) || ((int)param_1[99] == 0x10e)) {
        dVar11 = (double)FUN_018db610(lVar10);
        dVar12 = (double)FUN_0195fa50(param_1);
        (**(code **)(*param_1 + 0xd8))(param_1,dVar11 + dVar12);
      }
      else {
        dVar11 = (double)FUN_018db760(lVar10);
        dVar12 = (double)FUN_0195fa50(param_1);
        (**(code **)(*param_1 + 0xd8))(param_1,dVar11 + dVar12);
      }
      if ((char)param_1[0x5e] == '\x01') {
        (**(code **)(*param_1 + 200))
                  (param_1,((double)param_1[0x13] + dVar1) - (double)param_1[0x15]);
      }
      else if ((char)param_1[0x5e] == '\x02') {
        (**(code **)(*param_1 + 200))
                  (param_1,(double)param_1[0x13] + (dVar1 - (double)param_1[0x15]) / 2.0);
      }
      plVar2 = (longlong *)param_1[0x1e];
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x198))(plVar2,0,0);
      }
    }
  }
  FUN_0195a700(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_01960920(param_1,&local_78,param_5,param_6,param_3,param_4);
  *(longlong *)((longlong)param_1 + 0x37c) = local_78;
  *(longlong *)((longlong)param_1 + 900) = lStack_70;
  FUN_01960920(param_1,&local_78,0,0,0x3ff0000000000000,0x3ff0000000000000);
  param_1[0x77] = local_78;
  param_1[0x78] = lStack_70;
  return;
}

