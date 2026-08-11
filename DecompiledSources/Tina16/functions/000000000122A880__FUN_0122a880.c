/* Ghidra address: 0122a880 */
/* Ghidra symbol: FUN_0122a880 */


void FUN_0122a880(longlong param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined8 local_30;
  
  FUN_005fd4e0(param_2[0xf],0xff0000);
  iVar2 = FUN_01229eb0(0xc008020c49ba5e35);
  iVar1 = *(int *)PTR_DAT_020037d0;
  *(int *)PTR_DAT_02002a00 = iVar1 + iVar2;
  FUN_005fd670(param_2[0xf],CONCAT71((uint7)(uint3)((uint)(iVar1 + iVar2) >> 8),2));
  (**(code **)(*param_2 + 200))
            (param_2,*(undefined4 *)PTR_DAT_02003d58,*(undefined4 *)PTR_DAT_02002a00);
  (**(code **)(*param_2 + 0xc0))
            (param_2,(*(int *)PTR_DAT_02003d58 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x98)) -
                     *(int *)PTR_DAT_02001888,*(undefined4 *)PTR_DAT_02002a00);
  FUN_005fd670(param_2[0xf],0);
  if (param_3 == '\x01') {
    FUN_005fd4e0(param_2[0xf],DAT_02107718);
    FUN_005fdab0(param_2[0x10],DAT_02107718);
    FUN_005fc860(param_2[0xe],DAT_02107718);
  }
  else {
    FUN_005fd4e0(param_2[0xf],0xff);
    FUN_005fdab0(param_2[0x10],0xffffff);
    FUN_005fc860(param_2[0xe],0xff);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x4c) {
    FUN_0122a190(*(undefined4 *)PTR_DAT_02003d50,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02002ef8,param_2);
    (**(code **)(*param_2 + 200))
              (param_2,*(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80);
    (**(code **)(*param_2 + 0xc0))
              (param_2,*(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02004040 + -0x3c,*(int *)PTR_DAT_02003a80 + 0x14,L"Passband")
    ;
    plVar3 = param_2;
    FUN_0122a190(*(undefined4 *)PTR_DAT_02002e50,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_020037c8,param_2);
    uVar5 = (undefined4)((ulonglong)plVar3 >> 0x20);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02003528 + 10,*(int *)PTR_DAT_02005a18 + -0x14,L"Stopband");
    if (param_3 == '\0') {
      FUN_005fd4e0(param_2[0xf],0xff0000);
    }
    FUN_0122a340(*(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 CONCAT44(uVar5,*(undefined4 *)PTR_DAT_020037c8),param_2);
    FUN_0122a690(*(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02002ef8,param_2);
    FUN_0122a7b0(&local_30,*(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x870),local_30);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x878),0);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x48) {
    FUN_0122a190(*(undefined4 *)PTR_DAT_02003d50,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_020037c8,param_2);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02004040 + -0x3c,*(int *)PTR_DAT_02003a80 + -0x14,L"Stopband"
              );
    plVar3 = param_2;
    FUN_0122a190(*(undefined4 *)PTR_DAT_02002e50,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02002ef8,param_2);
    uVar5 = (undefined4)((ulonglong)plVar3 >> 0x20);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02003528 + 10,*(int *)PTR_DAT_02005a18 + 0x14,L"Passband");
    if (param_3 == '\0') {
      FUN_005fd4e0(param_2[0xf],0xff0000);
    }
    FUN_0122a4d0(*(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 CONCAT44(uVar5,*(undefined4 *)PTR_DAT_020037c8),param_2);
    FUN_0122a690(*(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02002ef8,param_2);
    FUN_0122a7b0(&local_30,*(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x878),local_30);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x870),0);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x50) {
    FUN_0122a190(*(undefined4 *)PTR_DAT_02003d50,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_020037c8,param_2);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02004040 + -0x3c,*(int *)PTR_DAT_02003a80 + -0x14,
               L"Stopband1");
    FUN_0122a200(*(undefined4 *)PTR_DAT_02002748,*(undefined4 *)PTR_DAT_02002ef8,
                 *(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8,param_2);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02002748 + 10,*(int *)PTR_DAT_020020a8 + 0x14,L"Passband");
    plVar3 = param_2;
    FUN_0122a190(*(undefined4 *)PTR_DAT_02002e50,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_020037c8,param_2);
    uVar5 = (undefined4)((ulonglong)plVar3 >> 0x20);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02003528 + 10,*(int *)PTR_DAT_02005a18 + -0x14,L"Stopband2");
    if (param_3 == '\0') {
      FUN_005fd4e0(param_2[0xf],0xff0000);
    }
    uVar4 = CONCAT44(uVar5,*(undefined4 *)PTR_DAT_020037c8);
    FUN_0122a4d0(*(undefined4 *)PTR_DAT_02002748,*(undefined4 *)PTR_DAT_020020a8,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,uVar4,param_2);
    uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)PTR_DAT_02002ef8);
    FUN_0122a690(*(undefined4 *)PTR_DAT_02002748,*(undefined4 *)PTR_DAT_020020a8,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,uVar4,param_2);
    uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)PTR_DAT_02003a80);
    FUN_0122a7b0(&local_30,*(undefined4 *)PTR_DAT_02002748,*(undefined4 *)PTR_DAT_020020a8,
                 *(undefined4 *)PTR_DAT_02004040,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x878),local_30);
    FUN_0122a340(*(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 CONCAT44(uVar5,*(undefined4 *)PTR_DAT_020037c8),param_2);
    FUN_0122a690(*(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02002ef8,param_2);
    FUN_0122a7b0(&local_30,*(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x870),local_30);
  }
  if (*(short *)(PTR_DAT_020021e8 + 0x1fa4) == 0x53) {
    FUN_0122a190(*(undefined4 *)PTR_DAT_02003d50,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02002ef8,param_2);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02004040 + -0x3c,*(int *)PTR_DAT_02003a80 + 0x14,L"Passband1"
              );
    FUN_0122a200(*(undefined4 *)PTR_DAT_02002748,*(undefined4 *)PTR_DAT_020037c8,
                 *(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8,param_2);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02002748 + 10,*(int *)PTR_DAT_020020a8 + -0x14,L"Stopband");
    plVar3 = param_2;
    FUN_0122a190(*(undefined4 *)PTR_DAT_02002e50,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02002ef8,param_2);
    uVar5 = (undefined4)((ulonglong)plVar3 >> 0x20);
    (**(code **)(*param_2 + 0x120))
              (param_2,*(int *)PTR_DAT_02003528 + 10,*(int *)PTR_DAT_02005a18 + 0x14,L"Passband2");
    if (param_3 == '\0') {
      FUN_005fd4e0(param_2[0xf],0xff0000);
    }
    uVar4 = CONCAT44(uVar5,*(undefined4 *)PTR_DAT_020037c8);
    FUN_0122a340(*(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02002748,*(undefined4 *)PTR_DAT_020020a8,uVar4,param_2);
    uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)PTR_DAT_02002ef8);
    FUN_0122a690(*(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02002748,*(undefined4 *)PTR_DAT_020020a8,uVar4,param_2);
    uVar4 = CONCAT44((int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)PTR_DAT_020020a8);
    FUN_0122a7b0(&local_30,*(undefined4 *)PTR_DAT_02004040,*(undefined4 *)PTR_DAT_02003a80,
                 *(undefined4 *)PTR_DAT_02002748,uVar4);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x870),local_30);
    FUN_0122a4d0(*(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8,
                 CONCAT44(uVar5,*(undefined4 *)PTR_DAT_020037c8),param_2);
    FUN_0122a690(*(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8,
                 *(undefined4 *)PTR_DAT_02002ef8,param_2);
    FUN_0122a7b0(&local_30,*(undefined4 *)PTR_DAT_02003528,*(undefined4 *)PTR_DAT_02005a18,
                 *(undefined4 *)PTR_DAT_02001398,*(undefined4 *)PTR_DAT_020020a8);
    FUN_00b90440(*(undefined8 *)(param_1 + 0x878),local_30);
  }
  return;
}

