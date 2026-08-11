/* Ghidra address: 011646d0 */
/* Ghidra symbol: FUN_011646d0 */


void FUN_011646d0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 char param_5,char param_6,undefined8 *param_7,double *param_8)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined7 uVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_stack_ffffffffffffff68;
  ulonglong uVar11;
  ulonglong in_stack_ffffffffffffff70;
  undefined8 local_68 [4];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar8 = local_68;
  for (lVar6 = 8; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *param_7;
    param_7 = param_7 + 1;
    puVar8 = puVar8 + 1;
  }
  dVar9 = (double)FUN_00b90620(local_68[0],0x3d719799812dea11);
  param_8[2] = dVar9;
  dVar9 = (double)FUN_00b90620(local_68[1],0x3eb0c6f7a0b5ed8d);
  param_8[3] = dVar9;
  dVar9 = (double)FUN_00b90620(local_68[2],0);
  param_8[4] = dVar9;
  uVar10 = FUN_00b90620(local_68[3],0);
  dVar9 = (double)FUN_00b90650(uVar10,0x3ff0000000000000);
  param_8[5] = dVar9;
  dVar9 = (double)FUN_00b90620(local_48,0x3d719799812dea11);
  param_8[6] = dVar9;
  dVar9 = (double)FUN_00b90620(local_40,0);
  param_8[7] = dVar9;
  dVar9 = (double)FUN_00b90620(local_38,0);
  param_8[8] = dVar9;
  param_8[9] = 0.0;
  dVar9 = (double)FUN_00b90620(local_30,0);
  param_8[10] = dVar9;
  uVar5 = (undefined7)((ulonglong)param_8 >> 8);
  uVar10 = CONCAT71(uVar5,7);
  cVar7 = '\0';
  if (param_5 == '\0') {
    uVar10 = CONCAT71(uVar5,6);
  }
  uVar3 = (undefined4)uVar10;
  if (param_6 == '\0') {
    cVar7 = '\x02';
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),(char)uVar10 + -2);
  }
  uVar4 = FUN_016e9e80(param_1,uVar3);
  cVar1 = FUN_016e9d10(param_1,2);
  *(char *)((longlong)param_8 + 0xaa) = cVar1 + '\x01';
  *(char *)((longlong)param_8 + 0xab) = cVar1 + '\x02';
  *(uint *)((longlong)param_8 + 0xac) = uVar4 & 0xff;
  *(undefined1 *)(param_8 + 0x15) = param_3;
  *(undefined1 *)((longlong)param_8 + 0xa9) = param_4;
  param_8[0xb] = 1.0;
  param_8[0xc] = 1.0;
  param_8[0xd] = 1.0;
  param_8[0xe] = 1.0;
  param_8[0xf] = 1.0;
  param_8[0x10] = 1.0;
  param_8[0x12] = 0.0;
  param_8[0x11] = 1e-30;
  param_8[0x13] = 0.0;
  param_8[0x14] = 0.0;
  dVar9 = (double)FUN_01164140(param_8);
  param_8[1] = dVar9;
  uVar2 = FUN_016ea1b0(param_1,4);
  *(undefined2 *)(param_8 + 0x16) = uVar2;
  uVar10 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff68 >> 8),1);
  FUN_016ebdd0(param_1,*(char *)((longlong)param_8 + 0xac) + '\x01',*(undefined1 *)(param_8 + 0x15),
               *(undefined1 *)((longlong)param_8 + 0xaa),uVar10);
  uVar11 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  FUN_016ebe60(param_1,*(char *)((longlong)param_8 + 0xac) + '\x02',
               *(undefined1 *)((longlong)param_8 + 0xaa),*(undefined1 *)((longlong)param_8 + 0xab),
               uVar11);
  FUN_016ebdd0(param_1,*(char *)((longlong)param_8 + 0xac) + '\x03',
               *(undefined1 *)((longlong)param_8 + 0xab),*(undefined1 *)((longlong)param_8 + 0xa9),
               uVar11 & 0xffffffffffffff00);
  FUN_016ec970(param_1,*(char *)((longlong)param_8 + 0xac) + '\x04',
               *(undefined1 *)((longlong)param_8 + 0xaa),*(undefined1 *)((longlong)param_8 + 0xa9),
               *(char *)((longlong)param_8 + 0xac) + '\x03');
  if (param_6 != '\0') {
    FUN_016ebdd0(param_1,*(char *)((longlong)param_8 + 0xac) + '\x05',param_6,0,1);
    cVar1 = *(char *)((longlong)param_8 + 0xac);
    FUN_016ecbf0(param_1,cVar1 + '\x06',cVar1 + '\x01',cVar1 + '\x05');
    FUN_016ed320(param_1,*(char *)((longlong)param_8 + 0xac) + '\x05',0,0,0);
    FUN_016ed220(param_1,*(char *)((longlong)param_8 + 0xac) + '\x06',1.0 / param_8[2],0);
  }
  if (param_5 != '\0') {
    FUN_016ec420(param_1,(*(char *)((longlong)param_8 + 0xac) - cVar7) + '\a',
                 *(undefined1 *)((longlong)param_8 + 0xaa),*(undefined1 *)((longlong)param_8 + 0xa9)
                 ,param_5,in_stack_ffffffffffffff70 & 0xffffffffffffff00,1);
    FUN_016ed320(param_1,(*(char *)((longlong)param_8 + 0xac) - cVar7) + '\a',0,1.0 / param_8[3],0);
  }
  FUN_016ed320(param_1,*(char *)((longlong)param_8 + 0xac) + '\x01',0,
               param_8[4] / (param_8[2] * 1.2566370614359173e-06),0);
  *param_8 = param_8[3] / (param_8[2] * 1.2566370614359173e-06);
  FUN_016ed320(param_1,*(char *)((longlong)param_8 + 0xac) + '\x02',0,1.0 / *param_8,0);
  FUN_016ed320(param_1,*(char *)((longlong)param_8 + 0xac) + '\x03',0,0,0);
  FUN_016ed220(param_1,*(char *)((longlong)param_8 + 0xac) + '\x04',0,0);
  dVar9 = (double)FUN_016e2f60(&PTR_FUN_016df0a8,1,param_1,param_2,1,0,0);
  param_8[0x17] = dVar9;
  dVar9 = (double)FUN_016e35b0(&PTR_FUN_016df478,1,param_1,param_2,1,0,0);
  param_8[0x18] = dVar9;
  dVar9 = (double)FUN_016e35b0(&PTR_FUN_016df478,1,param_1,param_2,1,0,0);
  param_8[0x19] = dVar9;
  return;
}

