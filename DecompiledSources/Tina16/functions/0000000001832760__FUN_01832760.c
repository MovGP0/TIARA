/* Ghidra address: 01832760 */
/* Ghidra symbol: FUN_01832760 */


void FUN_01832760(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  
  plVar3 = (longlong *)FUN_01832080(auStack_58,param_2);
  FUN_00414ad0(plVar3 + 7,*(undefined8 *)(param_1 + 0x38));
  iVar1 = FUN_00416db0(param_2,&DAT_0183290c);
  if (iVar1 != 0) {
    iVar1 = FUN_00416db0(param_2,L"unminus");
    if (iVar1 != 0) {
      iVar1 = FUN_00416db0(param_2,&DAT_01832938);
      if (iVar1 != 0) {
        iVar1 = FUN_00416db0(param_2,&DAT_0183294c);
        if (iVar1 == 0) {
          plVar4 = *(longlong **)(param_1 + 0x88);
          while( true ) {
            iVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
            iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
            if (iVar2 < iVar1) break;
            plVar4 = (longlong *)plVar4[0x13];
          }
          FUN_018318a0(plVar4[0x13],plVar4);
          FUN_01831860(plVar4[0x13],plVar4[0x11]);
          FUN_00410f20(plVar3);
          plVar3 = (longlong *)plVar4[0x11];
          plVar4[0x11] = 0;
          FUN_00410f20(plVar4);
        }
        else {
          plVar4 = *(longlong **)(param_1 + 0x88);
          if (plVar4 == *(longlong **)(param_1 + 0x90)) {
            FUN_01831860(*(longlong **)(param_1 + 0x90),plVar3);
          }
          else {
            iVar1 = (**(code **)(*plVar4 + 0x18))(plVar4);
            plVar6 = (longlong *)0x0;
            if (iVar1 != 6) {
              plVar4 = (longlong *)(*(longlong **)(param_1 + 0x88))[0x13];
              plVar6 = *(longlong **)(param_1 + 0x88);
            }
            while( true ) {
              plVar5 = plVar4;
              iVar1 = (**(code **)(*plVar5 + 0x18))(plVar5);
              iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3);
              if (iVar2 < iVar1) break;
              plVar4 = (longlong *)plVar5[0x13];
              plVar6 = plVar5;
            }
            FUN_018318a0(plVar5,plVar6);
            FUN_01831860(plVar5,plVar3);
            FUN_01831860(plVar3,plVar6);
          }
        }
        goto LAB_018328ec;
      }
    }
  }
  FUN_01832050(param_1,plVar3);
LAB_018328ec:
  *(longlong **)(param_1 + 0x88) = plVar3;
  return;
}

