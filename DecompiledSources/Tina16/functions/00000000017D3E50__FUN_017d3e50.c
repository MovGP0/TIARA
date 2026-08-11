/* Ghidra address: 017d3e50 */
/* Ghidra symbol: FUN_017d3e50 */


void FUN_017d3e50(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40 [3];
  
  local_40[0] = 0;
  if ((DAT_01fa4c9d != '\0' && DAT_0211010c == '\0') &&
     (cVar2 = FUN_017d28c0(param_1), cVar2 != '\0')) {
    FUN_017d2d10(*(undefined8 *)(param_1 + 0xa0),8);
    uVar9 = 0;
    uVar4 = FUN_01cc3870(&PTR_FUN_01cb5bc0,1,4,1,0);
    *(undefined8 *)PTR_DAT_020027c0 = uVar4;
    FUN_01cc2930(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),0,0,1,uVar9 & 0xffffffffffffff00
                 ,0,1,0);
    iVar8 = *(int *)(param_1 + 0x2d8);
    iVar7 = 1;
    if (0 < iVar8) {
      do {
        plVar1 = *(longlong **)
                  (*(longlong *)(*(longlong *)(param_1 + 0x2b0) + -8 + (longlong)iVar7 * 8) + 0x128)
        ;
        sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
        if ((sVar3 == 0x3e) || (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x66)) {
          (**(code **)(*plVar1 + 0x288))(plVar1,local_40);
          puVar5 = (undefined8 *)FUN_01cfde70(plVar1,1,0,&local_41,&local_42,&local_43);
          uVar4 = *puVar5;
          uVar6 = FUN_01d347d0(*(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 8),0);
          FUN_01cc09f0(uVar6,local_40[0]);
          *(undefined8 *)(*(longlong *)PTR_DAT_020027c0 + 0x28) = uVar4;
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    FUN_017d2950(param_1,8);
    DAT_0211010c = '\x01';
  }
  FUN_00414480(local_40);
  return;
}

