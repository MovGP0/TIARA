/* Ghidra address: 00c34b10 */
/* Ghidra symbol: FUN_00c34b10 */


longlong FUN_00c34b10(longlong *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 local_38 [16];
  
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    lVar5 = param_1[0x10];
    if (lVar5 == 0) {
      lVar5 = FUN_00608c80(&PTR_FUN_005f92e8,1);
      param_1[0x10] = lVar5;
      *(longlong **)(lVar5 + 0x20) = param_1;
      *(undefined8 *)(lVar5 + 0x18) = *(undefined8 *)(*param_1 + 0x20);
      iVar2 = FUN_00c1aa10(param_1[10]);
      if (0 < iVar2) {
        lVar6 = FUN_00c2fce0(param_1[10],0);
        uVar3 = (**(code **)(*param_1 + 0x60))(param_1);
        if (*(ushort *)(lVar6 + 0x4d) == uVar3) {
          lVar6 = FUN_00c2fce0(param_1[10],0);
          uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
          if (*(ushort *)(lVar6 + 0x4f) == uVar3) {
            uVar7 = FUN_00c2fce0(param_1[10],0);
            cVar1 = FUN_00c2a4a0(uVar7);
            if (cVar1 == '\0') {
              uVar7 = FUN_00c2fce0(param_1[10],0);
              uVar7 = FUN_00c29a40(uVar7);
              (**(code **)(*(longlong *)param_1[0x10] + 0x10))((longlong *)param_1[0x10],uVar7);
              return lVar5;
            }
          }
        }
        (**(code **)(*(longlong *)param_1[0x10] + 0x78))((longlong *)param_1[0x10],0);
        uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
        (**(code **)(*(longlong *)param_1[0x10] + 0x70))((longlong *)param_1[0x10],uVar4);
        uVar4 = (**(code **)(*param_1 + 0x60))(param_1);
        (**(code **)(*(longlong *)param_1[0x10] + 0x88))((longlong *)param_1[0x10],uVar4);
        uVar7 = FUN_00c2fce0(param_1[10],0);
        plVar8 = (longlong *)FUN_00c29a40(uVar7);
        uVar7 = (**(code **)(*plVar8 + 0x50))(plVar8);
        uVar7 = FUN_00608880(uVar7);
        (**(code **)(*(longlong *)param_1[0x10] + 0x78))((longlong *)param_1[0x10],uVar7);
        uVar7 = FUN_00c2fce0(param_1[10],0);
        cVar1 = FUN_00c2a4a0(uVar7);
        if (cVar1 != '\0') {
          uVar4 = FUN_00c36110(param_1);
          lVar6 = FUN_00609e10(param_1[0x10]);
          FUN_005fdcb0(*(undefined8 *)(lVar6 + 0x80),0);
          lVar6 = FUN_00609e10(param_1[0x10]);
          FUN_005fdab0(*(undefined8 *)(lVar6 + 0x80),uVar4);
          plVar8 = (longlong *)FUN_00609e10(param_1[0x10]);
          plVar9 = (longlong *)FUN_00609e10(param_1[0x10]);
          (**(code **)(*plVar9 + 0x20))(plVar9,local_38);
          (**(code **)(*plVar8 + 0xa8))(plVar8,local_38);
        }
        uVar7 = FUN_00c2fce0(param_1[10],0);
        uVar10 = FUN_00609e10(param_1[0x10]);
        plVar8 = (longlong *)FUN_00609e10(param_1[0x10]);
        (**(code **)(*plVar8 + 0x20))(plVar8,local_38);
        FUN_00c2c800(uVar7,uVar10,local_38,1,0);
      }
    }
  }
  else {
    lVar5 = 0;
  }
  return lVar5;
}

