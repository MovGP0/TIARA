/* Ghidra address: 006309d0 */
/* Ghidra symbol: FUN_006309d0 */


undefined8 FUN_006309d0(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined8 uVar21;
  
  uVar21 = 0xfffffffe;
  if (((((param_2 != (undefined4 *)0x0) && (*(code **)(param_2 + 0xc) != (code *)0x0)) &&
       (*(longlong *)(param_2 + 0xe) != 0)) &&
      ((plVar2 = *(longlong **)(param_2 + 10), plVar2 != (longlong *)0x0 &&
       ((undefined4 *)*plVar2 == param_2)))) &&
     ((param_1 != (undefined4 *)0x0 && ((int)plVar2[1] - 0x3f34U < 0x20)))) {
    puVar19 = (undefined8 *)(**(code **)(param_2 + 0xc))(*(undefined8 *)(param_2 + 0x10),1,0x1bf0);
    uVar21 = 0xfffffffc;
    if (puVar19 != (undefined8 *)0x0) {
      if (plVar2[8] == 0) {
        lVar20 = 0;
      }
      else {
        lVar20 = (**(code **)(param_2 + 0xc))
                           (*(undefined8 *)(param_2 + 0x10),1 << (*(byte *)(plVar2 + 6) & 0x1f),1);
        if (lVar20 == 0) {
          (**(code **)(param_2 + 0xe))(*(undefined8 *)(param_2 + 0x10),puVar19);
          return 0xfffffffc;
        }
      }
      *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
      uVar21 = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x12) = uVar21;
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      uVar8 = param_2[4];
      uVar9 = param_2[5];
      uVar10 = param_2[6];
      uVar11 = param_2[7];
      uVar12 = param_2[8];
      uVar13 = param_2[9];
      uVar14 = param_2[10];
      uVar15 = param_2[0xb];
      uVar16 = param_2[0xd];
      uVar17 = param_2[0xe];
      uVar18 = param_2[0xf];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = uVar16;
      param_1[0xe] = uVar17;
      param_1[0xf] = uVar18;
      param_1[8] = uVar12;
      param_1[9] = uVar13;
      param_1[10] = uVar14;
      param_1[0xb] = uVar15;
      param_1[4] = uVar8;
      param_1[5] = uVar9;
      param_1[6] = uVar10;
      param_1[7] = uVar11;
      *param_1 = uVar4;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      FUN_00626670(puVar19,plVar2,0x1bf0);
      *puVar19 = param_1;
      plVar3 = (longlong *)plVar2[0xc];
      plVar1 = plVar2 + 0xaa;
      if ((plVar1 <= plVar3) && (plVar3 <= (longlong *)((longlong)plVar2 + 0x1bdcU))) {
        puVar19[0xc] = (longlong)puVar19 + (longlong)plVar3 + (0x550 - (longlong)plVar1);
        puVar19[0xd] = (longlong)puVar19 + (plVar2[0xd] - (longlong)plVar1) + 0x550;
      }
      puVar19[0x11] = (longlong)puVar19 + (plVar2[0x11] - (longlong)plVar1) + 0x550;
      if (lVar20 != 0) {
        FUN_00626670(lVar20,plVar2[8],1 << (*(byte *)(plVar2 + 6) & 0x1f));
      }
      puVar19[8] = lVar20;
      *(undefined8 **)(param_1 + 10) = puVar19;
      uVar21 = 0;
    }
  }
  return uVar21;
}

