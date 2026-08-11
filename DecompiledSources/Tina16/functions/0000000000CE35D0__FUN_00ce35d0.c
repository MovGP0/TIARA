/* Ghidra address: 00ce35d0 */
/* Ghidra symbol: FUN_00ce35d0 */


void FUN_00ce35d0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00ce1840();
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x118) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Proxy-Connection",
                 *(undefined8 *)(param_1 + 0x118));
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x110) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x110) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Host",*(undefined8 *)(param_1 + 0x110));
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xc0) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Accept",*(undefined8 *)(param_1 + 0xc0));
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 200) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Accept-Charset",*(undefined8 *)(param_1 + 200));
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xd0) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Accept-Encoding",*(undefined8 *)(param_1 + 0xd0))
    ;
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xd8) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Accept-Language",*(undefined8 *)(param_1 + 0xd8))
    ;
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xe8) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"From",*(undefined8 *)(param_1 + 0xe8));
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xf8) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Referer",*(undefined8 *)(param_1 + 0xf8));
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x100) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"User-Agent",*(undefined8 *)(param_1 + 0x100));
  }
  FUN_00ce2a00(*(undefined8 *)(param_1 + 0x120),local_20);
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Range",local_20[0]);
  }
  if (0.0 < *(double *)(param_1 + 0xa0)) {
    FUN_00877920(local_30,*(undefined8 *)(param_1 + 0xa0));
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"If-Modified-Since",local_30[0]);
  }
  if (*(longlong *)(param_1 + 0x130) == 0) {
    if (*(char *)(param_1 + 0x128) == '\0') {
      FUN_00414480();
    }
    else {
      uVar1 = FUN_00cdd8c0(&PTR_FUN_00cdd5f0,1);
      *(undefined8 *)(param_1 + 0x130) = uVar1;
      FUN_00cd98b0(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x10),L"Username",
                   *(undefined8 *)(param_1 + 0x108));
      FUN_00cd98b0(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 0x10),L"Password",
                   *(undefined8 *)(param_1 + 0xf0));
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x50))
                (*(longlong **)(param_1 + 0x130),local_20);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x50))(*(longlong **)(param_1 + 0x130),local_20)
    ;
  }
  iVar2 = 0;
  if (local_20[0] != 0) {
    iVar2 = *(int *)(local_20[0] + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Authorization",local_20[0]);
  }
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x138) + -4);
  }
  if (0 < iVar2) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"X-HTTP-Method-Override",
                 *(undefined8 *)(param_1 + 0x138));
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

